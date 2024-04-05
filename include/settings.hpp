/* -----------------------------------------------
* AdminESP 2021
* Sitio WEB
* Correo: aal.cetemet@gmail.com
* Plataforma ESP32
* Proyecto Admin Panel Tool para el ESP32
* ------------------------------------------------
*/ 


// ---------------
// Definiciones
// ---------------

#define RELAY1 27 // GPIO27 para salida de relay 1
#define RELAY2 26 // GPIO26 para salida de relay 2
#define WIFILED 12 // GPIO12 LED indicador WiFi
#define MQTTLED 13 // GPIO13 LED indicador MQTT

// --------------
// Version de HW
// --------------
#define HW "ADMINESP32 v1 00000000" // Version del hw

// --------------------------
// Zona Configuracion general
// --------------------------
char    id[30];                   // ID del dispos
int     bootCount;                // Numero de reinicios

// --------------
// Zona WIFI
// --------------
boolean wifi_staticIP;            // Uso IP estática
char    wifi_ssid[30];            // Red WiFi
char    wifi_password[30];        // Contraseña Red Wifi
char    wifi_ip_static[15];       // IP Estática
char    wifi_gateway[15];         // Gateway
char    wifi_subnet[15];          // Subred
char    wifi_primaryDNS[15];      // DNS Primario
char    wifi_secondaryDNS[15];    // DNS Secundario

// ----------
// Zona AP
// ----------

boolean ap_accessPoint;         // Uso de modo AP
char ap_nameap[31];               // SSID AP
char ap_passwordap[63];           // Password AP
char ap_canalap;                  // Canal AP
int ap_hiddenap;                  // Es visible o no el AP (0 - Visible 1 - Oculto)
int ap_connetap;                  // Numero de conexiones con el AP

