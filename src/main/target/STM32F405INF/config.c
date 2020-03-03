# EMUFLIGHT / STM32F405 (S405) 4.1.1 Nov 15 2019 / 12:54:53 (1e5e3d369) MSP API: 1.42

board_name NBD_INFINITYF4
manufacturer_id NEBD

# resources
resource BEEPER 1 B06
resource MOTOR 1 B01
resource MOTOR 2 B00
resource MOTOR 3 C09
resource MOTOR 4 A08
resource LED_STRIP 1 B08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource INVERTER 1 A10
resource LED 1 C00
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource ESCSERIAL 1 D02
resource CAMERA_CONTROL 1 B09
resource ADC_BATT 1 C04
resource ADC_CURR 1 C03
resource PINIO 1 C05
resource FLASH_CS 1 A15
resource OSD_CS 1 A04
resource GYRO_EXTI 1 C13
resource GYRO_CS 1 B12

# timer
timer B09 AF3
# pin B09: TIM11 CH1 (AF3)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B00 AF3
# pin B00: TIM8 CH2N (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B08 AF2
# pin B08: TIM4 CH3 (AF2)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B00 0
# pin B00: DMA2 Stream 2 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin A08 1
# pin A08: DMA2 Stream 1 Channel 6
dma pin B08 0
# pin B08: DMA1 Stream 7 Channel 2
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2

# feature
feature -RX_PARALLEL_PWM
feature RX_SERIAL
feature OSD

# serial
serial 0 64 115200 57600 0 115200
serial 5 1 115200 57600 0 115200

# aux
aux 0 0 0 1700 2100 0 0
aux 1 35 2 1700 2100 0 0

# master
set acc_hardware = NONE
set mag_hardware = NONE
set baro_hardware = NONE
set serialrx_provider = SBUS
set motor_pwm_protocol = DSHOT600
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 245
set beeper_frequency = 1000
set yaw_motors_reversed = ON
set pid_process_denom = 1
set osd_vbat_pos = 2388
set osd_tim_2_pos = 2370
set osd_vtx_channel_pos = 2403
set osd_current_pos = 2419
set osd_craft_name_pos = 2410
set osd_warnings_pos = 2281
set system_hse_mhz = 8
set max7456_spi_bus = 1
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 2
set gyro_1_sensor_align = CW90
set gyro_1_align_yaw = 900
set pinio_config = 129,1,1,1
set pinio_box = 40,255,255,255
set name = INFINITY
