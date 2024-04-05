/* -----------------------------------------------
* AdminESP 2021
* Sitio WEB
* Correo: aal.cetemet@gmail.com
* Plataforma ESP32
* Proyecto Admin Panel Tool para el ESP32
* ------------------------------------------------
*/ 

// -----------------------------------------------
// Generar log por puerto serial
// -----------------------------------------------

void log(String s){
    Serial.println(s);
}


// -----------------------------------------------
// De Hex a String
// ------------------------------------------------
String hexStr(const unsigned long &h, const byte &l = 8){
    String s;
    s = String(h, HEX);
    s.toUpperCase();
    s = ("00000000" + s).substring(s.length() + 8 - l);
    return s;
}

// -----------------------------------------------
// Crea un único ID desde la direccion MAC
// -----------------------------------------------
String idUnique(){
    // Retorna los ultimos 4 bytes del MAC rotados
    char idunique[15];
    uint64_t chipid =  ESP.getEfuseMac();
    uint64_t chip =  (uint16_t) (chipid >> 32 );
    snprintf(idunique, 15, "%O4X", chip);
    return idunique;
}

String deviceID(){
    return "ESP32" + hexStr(ESP.getEfuseMac())+ String(idUnique());
}