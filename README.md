# Orbit
Project Orbit, a 3D Printed Record Player

This project is not for beginners.  It implies a basic knowledge of electronics, arduino and sufficient skills to be able to 3D Print the parts.  All of these parts can be substituted, and hacking this to make it better is strongly encouraged.

Parts List.

* All the STL files in this github.
* 1x 12VDc 36 RPM Geared Motor - https://www.ebay.com.au/i/254510260087?chn=ps&norover=1&mkevt=1&mkrid=705-139619-5960-0&mkcid=2&itemid=254510260087&targetid=833371315590&device=c&mktype=pla&googleloc=9069087&poi=&campaignid=7412064608&mkgroupid=80796191437&rlsatarget=pla-833371315590&abcId=1139216&merchantid=115424862&gclid=CjwKCAiA44LzBRB-EiwA-jJipKpKx7hDqfwylnVFe3GtM_GhD_xAVOjEFTLd9hxOLocSxguc-19HMRoCQx0QAvD_BwE
* 1x 2.1mm Barrel Socket - https://www.jaycar.com.au/2-1mm-bulkhead-male-dc-power-connector/p/PS0522?gclid=CjwKCAiA44LzBRB-EiwA-jJipO1IQfbGVL5s9F8vA37GyQtCs6tO8-ET5h8YiMIagjWOLxBuqXFgbRoChDgQAvD_BwE
* 1x 2.1mm Barrel Jack - https://www.jaycar.com.au/2-1mm-dc-power-line-connector/p/PP0509
* 1x Arduino Uno - https://www.amazon.com.au/ELEGOO-Board-ATmega328P-ATMEGA16U2-Arduino/dp/B01EWOE0UU/ref=asc_df_B01EWOE0UU/?tag=googleshopdsk-22&linkCode=df0&hvadid=341773396021&hvpos=&hvnetw=g&hvrand=14520537779051832173&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9069087&hvtargid=pla-455309014075&psc=1
* 1x Adafruit Motor Shield - https://www.adafruit.com/product/1438
* 1x Record Player Cartridge - https://www.ebay.com.au/itm/Turntable-Phono-Ceramic-Cartridge-with-Stylus-Needle-for-Vinyl-Record-Player-FS/192885929313?_trkparms=aid%3D555018%26algo%3DPL.SIM%26ao%3D2%26asc%3D20160908110712%26meid%3D7c345b180ea5485883f38491a9a7037e%26pid%3D100677%26rk%3D1%26rkt%3D30%26mehot%3Dag%26sd%3D254212430625%26itm%3D192885929313%26pmt%3D1%26noa%3D0%26pg%3D2386202%26algv%3DSimplAMLv5PairwiseWeb&_trksid=p2386202.c100677.m4598
* 1x 4 pack of Headshell Wires - https://www.ebay.com.au/itm/Turntable-Record-Player-Cartridge-Tonearm-Headshell-Leads-Wires-x-4-Tin-Plated/153731922565?hash=item23cb22fa85:g:vo8AAOSwOgdYsqCU
* 1x Illuminated Momentary Switch - https://www.ebay.com.au/itm/4-Pin-12V-12mm-Angel-Eye-LED-Light-Metal-Push-Button-Momentary-Switch-Waterproof/311981318686?hash=item48a389221e:m:m-Uh7WuFuCI7PZWry-t0GFQ
* 2x RCA Panel Mount Sockets - https://www.ebay.com.au/itm/Panel-Mount-RCA-Female-Socket-Connectors-Adapters-x-2-Pcs/273392016355?hash=item3fa76f1be3:g:qv4AAOSwrK1baBxc
* Thin gauge wire, a ribbon cable is perfect.
* 4x M5x16mm screw
* 1x M5x65mm Screw
* 5x M5 Nut
* 10x M3x8mm screw
* 2x M3x8 Nut
* 1x M3x25mm Screw


1.  Print files.

Print the following in whatever you usually print in with PLA.  I used 10% infill and no supports or rafts.  There is one file that must be printed with 100% infill and it's clearly identified.

Choose whichever sizes you can fit on your printer, the bigger the better, but honestly, just print whatever works for you.

2.  Flash the Arduino with the .INO code provided.

3.  Attach the motor to the Motor Carrier with 2x M3x8mm screws.  Do not overtighten.  Just tight enough to be secure.
4.  Attach the Motor Carrier to the Chassis with 2x M3x8mm screws.  
5.  If you printed a two piece chassis due to a small printer, connect the two pieces with 4x M5x16mm screws and nuts.
6.  Hot glue your Cartridge (Record player needle) to the Tone Arm.
7.  Feed your thin gauge wires up through the tonearm.  
8.  Strip one end of the headshell wires, and solder the stripped end to the thin gauge wires.
9.  Connect these to the cartridge.  Take note of the pins and colors.
10.  Feed these through the hole on the chassis.
