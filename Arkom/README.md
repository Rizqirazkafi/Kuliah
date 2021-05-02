# Smoke detector with Node MCU via Telegram Bot

## Komponen
1. NodeMCU V3
2. MQ-2 Gas Sensor
3. Female to Female jumper cable
4. USB cable
5. 5V power source (battery)
6. Telegram Bot
7. Jaringan Wifi

## Library Dependencies
Daftar Library yang harus di install di ArduinoIDE
1. CTBOT
    1. Pergi ke Sketch -> Include Library -> Manage Libraries.
    2. Cari library CTBot.
    3. Install.
2. ESP8266
    1. Pergi ke File -> Preferences.
    2. Tambahkan link berikut ke Additional Boards Manager URLs :
        > https://arduino.esp8266.com/stable/package_esp8266com_index.json
    3. Klik OK.
    4. Pergi ke Tools -> Board -> Boards Manager
    5. Cari ESP8266
    6. Install
    7. Restart ArduinoIDE

## Langkah Langkah (Hardware)

1. Sambungkan pin A0 pada Node MCU ke pin A0 pada MQ-2 Gas Sensor.
2. Sambungkan pin GND pada kutub negative power source.
3. Sambungkan pin VCC pada kutub positive power source.
4. Sambungkan NodeMCU kepada PC melalui koneksi kabel usb.

## Langkah Langkah (Software)

### Telegram
1. Mulai Bot Father.
    ``` bash
    /start
    ```
2. Buat bot baru.
    ``` bash
    /newbot botname_bot
    ```
    > Note : Ganti botname dengan nama bot yang dingingkan.
    
    Setelah Bot, dibuat akan keluar token dari Bot.
        
3. Buka IDBot untuk mendapatkan ID bot.
    ``` bash
    /start
    ```
        
    ``` bash
    /getid
    ```
### Arduino source code
1. Atur ssid wifi.
   ``` cpp
   String ssid = " ";
   ```
2. Atur password wifi.
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
    
## Compile source code
    1. Buka source code.
    2. Pilih board :
        1. Tools -> Board.
        2. Pilih Generic ESP8266 Module.
    3. Upload.
    
