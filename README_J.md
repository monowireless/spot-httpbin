<a href="https://mono-wireless.com/jp/index.html">
    <img src="https://mono-wireless.com/common/images/logo/logo-land.svg" alt="mono wireless logo" title="MONO WIRELESS" align="right" height="60" />
</a>

# spot-httpbin

**Mono Wireless TWELITE SPOT httpbin Client Example**
(*mwings-v1.1.3*)

[![MW-OSSLA](https://img.shields.io/badge/License-MW--OSSLA-e4007f)](LICENSE.md)
[日本語版はこちら](README_J.md)

## 目次

- [概要](#概要)
- [使用方法](#使用方法)
- [依存関係](#依存関係)
- [ライセンス](#ライセンス)

## 概要

TWELITE SPOT の ESP32 を REST API クライアントとして使います。

受信したパケットデータを HTTP GET リクエストのクエリに含めることができます。
HTTP**S** 通信と NTP による時刻の取得に対応しています。

- 例として、TWELITE ARIA からのパケットを受信します。
- データを `https://www.httpbin.org/get` へ送信します。
  - このエンドポイントは、与えられたパラメータをそのまま返します。
  - 詳細は [httpbin.org](https://www.httpbin.org) をご覧ください。

## 使用方法

1. `config.h` を編集して、Wi-Fi とルート証明書を登録してください。
2. スケッチを書き込みます。

> ルート証明書は、Chrome などのウェブブラウザにおける各ページのセキュリティ画面から取得できます。

## 依存関係

### TWELITE SPOT 内の TWELITE BLUE

- ファームウェア
  - App_Wings (TWELITE_SPOT) (>= 1.3.0)

### TWELITE SPOT 内の ESP32-WROOM-32

- 開発環境
  - [Arduino IDE](https://github.com/arduino/Arduino) (1.x)
  - [ESP32 Arduino core](https://github.com/espressif/arduino-esp32) (< 3.0, >= 2.0.12)
- ライブラリ
  - [MWings](https://github.com/monowireless/mwings_arduino) (< 1.2, >= 1.0.1)
  - [同梱] [NTPClient](https://github.com/arduino-libraries/NTPClient) (>= 3.2.1)
  - [同梱] [Time](https://github.com/PaulStoffregen/Time) (>= 1.6.1)

## ライセンス

``` plain
Copyright (C) 2023 Mono Wireless Inc. All Rights Reserved.
Released under MW-OSSLA-1J,1E (MONO WIRELESS OPEN SOURCE SOFTWARE LICENSE AGREEMENT).
```
