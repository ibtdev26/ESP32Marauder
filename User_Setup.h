#define TFT_SPI_MODE SPI_MODE3

#define ILI9341_DRIVER

#define TFT_MOSI 5
#define TFT_MISO 23
#define TFT_SCLK 4
#define TFT_CS   24
#define TFT_DC   2
#define TFT_RST  -1

// SPI settings – SAFE for ESP32-C5 + ILI9341
#define SPI_FREQUENCY        20000000
#define SPI_READ_FREQUENCY  10000000
#define SPI_TOUCH_FREQUENCY 2500000

// REQUIRED fixes
#define TFT_INIT_DELAY 120

// Disable DMA (good call)
#define TFT_NO_DMA
