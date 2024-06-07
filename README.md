<a href="https://mono-wireless.com/jp/index.html">
    <img src="https://mono-wireless.com/common/images/logo/logo-land.svg" alt="mono wireless logo" title="MONO WIRELESS" align="right" height="60" />
</a>

# spot-httpbin

**Mono Wireless TWELITE SPOT httpbin Client Example**
(*mwings-v1.2.0*)

[![MW-OSSLA](https://img.shields.io/badge/License-MW--OSSLA-e4007f)](LICENSE.md)
[日本語版はこちら](README_J.md)

## Contents

- [About](#about)
- [Usage](#usage)
- [Dependencies](#dependencies)
- [License](#license)

## About

Configure ESP32 on the TWELITE SPOT as a REST API client.

Packet data can be used for query string of HTTP GET requests.
HTTP**S** connections and NTP timestamps are available.

- Receive packets from TWELITE ARIA as an example.
- Send data to `https://www.httpbin.org/get`.
  - This endpoint returns the given parameters as is.
  - For details, see [httpbin.org](https://www.httpbin.org)

## Usage

1. Modify Wi-Fi configuration and add root CA certificate in the `config.h` file.
2. Upload & Run the sketch.

> Root CA certificate can be obtained from the security window of each page on the web browser such as Chrome.

## Dependencies

### TWELITE BLUE on the TWELITE SPOT

- Firmware
  - App_Wings (TWELITE_SPOT) (>= 1.3.2)

### ESP32-WROOM-32 on the TWELITE SPOT

- Environment
  - [Arduino IDE](https://github.com/arduino/Arduino) (1.x)
  - [ESP32 Arduino core](https://github.com/espressif/arduino-esp32) (>= 3.0)
- Libraries
  - [MWings](https://github.com/monowireless/mwings_arduino) (>= 1.2)
  - [Included] [NTPClient](https://github.com/arduino-libraries/NTPClient) (>= 3.2.1)
  - [Included] [Time](https://github.com/PaulStoffregen/Time) (>= 1.6.1)

## License

``` plain
Copyright (C) 2024 Mono Wireless Inc. All Rights Reserved.
Released under MW-OSSLA-1J,1E (MONO WIRELESS OPEN SOURCE SOFTWARE LICENSE AGREEMENT).
```
