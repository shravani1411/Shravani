//Write an Embedded C Program and implement USART Non-Blocking and USART TIMEOUT Functions.

// RCC registers
#define RCC_AHB1ENR (*(volatile int *)0x40023830) // PORTA clock
#define RCC_APB1ENR (*(volatile int *)0x40023840) //peripheral clock enable USART2

// GPIOA registers
#define   GPIO_PORTA_MODE           (*(volatile int *)0x40020000)   // GPIOA MODE register
#define   GPIO_PORTA_ODR           (*(volatile int *)0x40020014)   // GPIOA Output register
#define   GPIO_PORTA_IDR           (*(volatile int *)0x40020010)   // GPIOA Input register
#define   GPIO_PORTA_AFRL           (*(volatile int *)0x40020020)   // GPIOA Alternate function low register

//USART registers
#define   UART2_SR                  (*(volatile int *)0x40004400)   // USART2 status register
#define   UART2_DR                  (*(volatile int *)0x40004404)    // USART2 data register
#define   UART2_BRR                  (*(volatile int *)0x40004408)   // USART2  Baud rate register
#define   UART2_CR1                  (*(volatile int *)0x4000440C)    // USART2 control register1
#define   UART2_CR2                 (*(volatile int *)0x40004410)     // USART2 control register2

// Function Prototype
void UART2_Init(void);                // USART Intialisation
void UART2_Config(void);              // USART configuration
void UART2_Tx_OUTCHAR(unsigned char out);
unsigned char UART2_Rx_INCHAR(void);

volatile char ch = 'A';

int main()
{
UART2_Init();
UART2_Config();

while(1)
{
UART2_Tx_OUTCHAR(ch);                 // Transmit data
ch = UART2_Rx_INCHAR();                // Receive data
ch++;
}
}

void UART2_Tx_OUTCHAR(unsigned char out)
{
while(!(UART2_SR & 0x80));                      // Wait until TE Bit is SET | Data register is empty - PISO
UART2_DR = out;
}

unsigned char UART2_Rx_INCHAR(void)
{
if(!(UART2_SR & 0x20));                      // Wait until RXNE is SET | Data register is FULL - SIPO
return (UART2_DR & 0xff);
}

void UART2_Init(void)
{
RCC_AHB1ENR |= 0x01;                        // Enable PORTA clk
while(!(RCC_AHB1ENR & 0x01));               // wait till the bit is set
GPIO_PORTA_MODE &= 0xFFFFFF0F;               // CLEAR PA2 & PA3
GPIO_PORTA_MODE |= 0x000000A0;               // configure PA2 & PA3 to alternate function mode
RCC_APB1ENR |= 0x01 << 17;                   // Enable USART2 clk
GPIO_PORTA_AFRL &= 0xFFFF00FF;               // CLEAR PA2 & PA3
GPIO_PORTA_AFRL |= 0x00007700;               // alternate function mode
}

void UART2_Config(void)
{
UART2_BRR |= 0x683;                        // 9600 8N1 baud rate
UART2_CR1 &= 0xFFFFDFF3;                   // CLEAR 2nd,3rd & 13th bit
UART2_CR1 |= 0x0000200C;                   // SET 2nd,3rd & 13th bit to enable Tx,Rx & USART2
}
