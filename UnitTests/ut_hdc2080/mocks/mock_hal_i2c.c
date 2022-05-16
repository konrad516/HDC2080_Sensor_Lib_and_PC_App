#include "CppUTestExt/MockSupport_c.h"
#include "i2c.h"

I2C_HandleTypeDef hi2c1;

HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c,
                                   uint16_t DevAddress,
                                   uint16_t MemAddress,
                                   uint16_t MemAddSize,
                                   uint8_t *pData,
                                   uint16_t Size,
                                   uint32_t Timeout)
{
    return (HAL_StatusTypeDef)(mock_c()->actualCall("HAL_I2C_Mem_Read")
                                       ->withIntParameters("DevAddress", DevAddress)
                                       ->withIntParameters("MemAddress", MemAddress)
                                       ->withIntParameters("MemAddSize", MemAddSize)
                                       ->withOutputParameter("pData", pData)
                                       ->withIntParameters("Size", Size)
                                       ->withIntParameters("Timeout", Timeout)
                                       ->returnIntValueOrDefault(HAL_OK));

}

HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c,
                                    uint16_t DevAddress,
                                    uint16_t MemAddress,
                                    uint16_t MemAddSize,
                                    uint8_t *pData,
                                    uint16_t Size,
                                    uint32_t Timeout)
{
    return (HAL_StatusTypeDef)(mock_c()->actualCall("HAL_I2C_Mem_Write")
                                        ->withIntParameters("DevAddress", DevAddress)
                                        ->withIntParameters("MemAddress", MemAddress)
                                        ->withIntParameters("MemAddSize", MemAddSize)
                                        ->withMemoryBufferParameter("pData", pData, Size)
                                        ->withIntParameters("Size", Size)
                                        ->withIntParameters("Timeout", Timeout)
                                        ->returnIntValueOrDefault(HAL_OK));
}

void HAL_Delay(void)
{

}