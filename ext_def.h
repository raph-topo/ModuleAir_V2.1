// Language config
#define CURRENT_LANG INTL_LANG

// Wifi config
const char WLANSSID[] PROGMEM = "ModuleAir";
const char WLANPWD[] PROGMEM = "ModuleAir";


#define TIME_FOR_WIFI_CONFIG 120000;
#define SENDING_INTERVALL_MS 120000;

// BasicAuth config
const char WWW_USERNAME[] PROGMEM = "admin";
const char WWW_PASSWORD[] PROGMEM = "";
#define WWW_BASICAUTH_ENABLED 0

// Sensor Wifi config (config mode)
#define FS_SSID ""
#define FS_PWD "moduleaircfg"

#define HAS_WIFI 1
#define HAS_LORA 1
const char APPEUI[] = "0000";
const char DEVEUI [] = "0000";
const char APPKEY[] = "0000";

// Where to send the data?
#define SEND2SENSORCOMMUNITY 0
#define SSL_SENSORCOMMUNITY 0
#define SEND2MADAVI 0
#define SSL_MADAVI 0
#define SEND2CSV 0
#define SEND2CUSTOM 1
#define SEND2CUSTOM2 0

enum LoggerEntry {
    LoggerSensorCommunity,
    LoggerMadavi,
    LoggerCustom,
    LoggerCustom2,
    LoggerCount
};

struct LoggerConfig {
    uint16_t destport;
    uint16_t errors;
    void* session;
};

// IMPORTANT: NO MORE CHANGES TO VARIABLE NAMES NEEDED FOR EXTERNAL APIS
static const char HOST_MADAVI[] PROGMEM = "api-rrd.madavi.de";
static const char URL_MADAVI[] PROGMEM = "/data.php";

#define PORT_DUSTI 80
#define PORT_MADAVI 80

static const char HOST_SENSORCOMMUNITY[] PROGMEM = "api.sensor.community";
static const char URL_SENSORCOMMUNITY[] PROGMEM = "/v1/push-sensor-data/";
#define PORT_SENSORCOMMUNITY 80

static const char NTP_SERVER_1[] PROGMEM = "ntp-p1.obspm.fr";
static const char NTP_SERVER_2[] PROGMEM = "ntp.obspm.fr";

// define own API
static const char HOST_CUSTOM[] PROGMEM = "data.moduleair.fr";
static const char URL_CUSTOM[] PROGMEM = "/wifi.php";
#define PORT_CUSTOM 80
#define USER_CUSTOM ""
#define PWD_CUSTOM ""
#define SSL_CUSTOM 0

// define own API
static const char HOST_CUSTOM2[] PROGMEM = "192.168.234.1";
static const char URL_CUSTOM2[] PROGMEM = "/data.php";
#define PORT_CUSTOM2 80
#define USER_CUSTOM2 ""
#define PWD_CUSTOM2 ""
#define SSL_CUSTOM2 0

#if defined(ARDUINO_ESP32_DEV) and defined(KIT_V1)
//#define ONEWIRE_PIN D25
#define PM_SERIAL_RX D39
#define PM_SERIAL_TX D4
#define CO2_SERIAL_RX D36
#define CO2_SERIAL_TX D12
#define I2C_PIN_SCL D22
#define I2C_PIN_SDA D21
// #define GPS_SERIAL_RX D12
// #define GPS_SERIAL_TX D13

//Original PINout

// #define P_LAT 22
// #define P_A 19
// #define P_B 23
// #define P_C 18
// #define P_D 5
// #define P_E 15
// #define P_OE 16



#define P_LAT D15
#define P_A D16
#define P_B D17
#define P_C D25
#define P_D D27
#define P_E D32
#define P_OE D33

// const lmic_pinmap lmic_pins = {
// 	.nss = D5,
// 	.rxtx = LMIC_UNUSED_PIN,
// 	.rst = D14,
// 	.dio = {D26, D35, D34},
// };

// MOSI 23
// MISO 19
// SCK  18 

#endif

#if defined(ARDUINO_ESP32_DEV) and defined(KIT_C)
//#define ONEWIRE_PIN D25
#define PM_SERIAL_RX D39
#define PM_SERIAL_TX D32 // D2 BUG 32 ? D4
#define CO2_SERIAL_RX D36
#define CO2_SERIAL_TX D27
#define I2C_PIN_SCL D22
#define I2C_PIN_SDA D21

#define P_LAT D25
#define P_A D17
#define P_B D33
#define P_C D4 //2
#define P_D D12 //27
#define P_E D15
#define P_OE D16

#endif

// SDS011, the more expensive version of the particle sensor
#define SDS_READ 0
#define SDS_API_PIN 1

// Tera Sensor Next PM sensor
#define NPM_READ 1
// #define NPM_FULLTIME 1
#define NPM_API_PIN 1

// BMP280/BME280, temperature, pressure (humidity on BME280)
#define BMX280_READ 1
#define BMP280_API_PIN 3
#define BME280_API_PIN 11

// MH-Z16/MH-Z19, CO2 Sensor
#define MHZ16_READ 1
#define MHZ19_READ 0
// #define MHZ16_API_PIN X
// #define MHZ19_API_PIN X

// SGP40, COV Sensor

#define CCS811_READ 1
// #define CCS811_API_PIN X

//Location

const char LATITUDE[] PROGMEM = "43.296";
const char LONGITUDE[] PROGMEM = "5.369";

// GPS, preferred Neo-6M
#define GPS_READ 0
#define GPS_API_PIN 9

// OLED Display SSD1306
#define HAS_SSD1306 0

// RGB Matrix
#define HAS_MATRIX 1

//Actual Data

#define DISPLAY_MEASURE 1
#define DISPLAY_FORECAST 0

// Show wifi info on displays
#define DISPLAY_WIFI_INFO 0

// Show wifi info on displays
#define DISPLAY_LORA_INFO 0

// Show device info on displays
#define DISPLAY_DEVICE_INFO 0

// Set debug level for serial output?
#define DEBUG 5

static const char URL_API_SENSORCOMMUNITY[] PROGMEM = "https://data.sensor.community/airrohr/v1/sensor/";
