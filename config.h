// TWELITE SPOT httpbin example

// System defs
const uint32_t REBOOT_INTERVAL = 21600; // seconds

// TWELITE defs
const uint8_t TWE_CHANNEL = 18;
const uint32_t TWE_APP_ID = 0x67720102;

// Wi-Fi defs
const char* WIFI_SSID = "YOUR SSID";
const char* WIFI_PASSWORD = "YOUR PASSWORD";

const char *CA_CERT =
    "-----BEGIN CERTIFICATE-----\n"
    "-----END CERTIFICATE-----\n";

const char *SERVER_HOST = "www.httpbin.org";
const uint16_t SERVER_PORT = 443;

const uint32_t NTP_UPDATE_INTERVAL = 10000; // ms

const int QUERIES_MAX_LENGTH = 128;         // bytes (without \0)
const int32_t CONNECT_TIMEOUT = 10;     // seconds
const uint32_t RECONNECT_MIN_INTERVAL = 5; // seconds
// SEND_MIN_INTERVAL must be longer than NTP_UPDATE_INTERVAL
const uint32_t SEND_MIN_INTERVAL = 10; // seconds
const uint32_t REQUEST_TIMEOUT = 10;   // seconds

// App defs

/*
 * Copyright (C) 2023 Mono Wireless Inc. All Rights Reserved.
 * Released under MW-OSSLA-1J,1E (MONO WIRELESS OPEN SOURCE SOFTWARE LICENSE
 * AGREEMENT).
 */
