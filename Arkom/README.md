# Smoke detector with Node MCU via Telegram Bot

## Komponen
1. NodeMCU V3
2. MQ-2 Gas Sensor
3. Female to Female jumper cable
4. USB cable
5. 9V power source (battery)
6. Telegram Bot

## Library Dependencies
Daftar Library yang harus di install di ArduinoIDE
1. CTBOT
2. ESP8266

## Langkah Langkah (Hardware)

1. Sambungkan pin A0 pada Node MCU ke pin A0 pada MQ-2 Gas Sensor.
2. Sambungkan pin GND pada kutub negative power source.
3. Sambungkan pin VCC pada kutub positive power source.
4. Sambungkan NodeMCU kepada PC melalui koneksi kabel usb.

## Langkah Langkah (Software)

### Telegram
1. Mulai Bot Father
    ``` bash
    /start
    ```
2. Buat bot baru
    ``` bash
    /newbot <botname>_bot
    ```
    Setelah Bot, dibuat akan keluar token dari Bot
        
3. Buka IDBot untuk mendapatkan ID bot
    ``` bash
    /start
    ```
        
    ``` bash
    /getid
    ```
### Arduino source code
1. Atur ssid wifi pada kolom 
   ``` cpp
   String ssid = " ";
   ```
2. Atur password wifi pada kolom
    ``` cpp
    String pass = " ";
    ```
3. Masukkan Token Telegram dari BotFather.
    ``` cpp
    String token = " "; 
    ```
4. Masukkan ID Bot Telegram dari IDBot.
    ``` cpp
    const int id = " ";
    ```
    
5. Compile source code
    1. Pastikan board yang dipilih adalah NodeMCU
    
    
    
