#Smoke detector with Node MCU via Telegram Bot

##Komponen
1. NodeMCU V3
2. MQ-2 Gas Sensor
3. Female to Female jumper cable
4. USB cable
5. 9V power source (battery)
6. Telegram Bot

##Langkah Langkah (Hardware)

1. Sambungkan pin A0 pada Node MCU ke pin A0 pada MQ-2 Gas Sensor.
2. Sambungkan pin GND pada kutub negative power source.
3. Sambungkan pin VCC pada kutub positive power source.
4. Sambungkan NodeMCU kepada PC melalui koneksi kabel usb.

##Langkah Langkah (Software)
1. Atur ssid wifi pada kolom 
   ```Arduino
   String ssid = " ";
   ```
