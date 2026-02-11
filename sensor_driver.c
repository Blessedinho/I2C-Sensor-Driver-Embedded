#include <stdio.h>
#include <stdint.h>

// Mocking Hardware Registers (Typical in EE firmware development)
#define I2C_CR1_REG    0x40005400 // Control Register
#define I2C_DR_REG     0x40005410 // Data Register
#define SENSOR_ADDR    0x48       // Example I2C Address for Temp Sensor

void i2c_start() {
    printf("Sending START condition to bus...\n");
}

void i2c_write_addr(uint8_t addr) {
    printf("Addressing Slave: 0x%02X\n", addr);
}

uint8_t i2c_read_data() {
    printf("Reading data from sensor registers...\n");
    return 25; // Mock temperature value in Celsius
}

int main() {
    printf("--- I2C Temperature Driver Initialized ---\n");
    
    i2c_start();
    i2c_write_addr(SENSOR_ADDR);
    
    uint8_t temp = i2c_read_data();
    
    printf("Current Temperature: %d C\n", temp);
    printf("Driver status: SUCCESS\n");

    return 0;
}