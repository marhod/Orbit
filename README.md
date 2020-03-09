# Project Orbit, a 3D Printed Record Player

## This project is designed to be a PROOF OF CONCEPT for a 3D Printed Record Player.

### It is intended to:
* Act as a thought experiment applying modern fabrication techniques to a vintage application.
* Be a cool use of 3D Printing
* Act as a proof of concept
* Play records
* Make people say "Hey's that's cool!"
* Have some fun 3D Printing
* Maybe give some people a new lease on some crappy records from a thrift store

### It is NOT intended to do any of the following:
* Replace a manufactured turntable
* Have exceptional sound quality
* Be a perfect implementation of a design or project
* Be even a good quality turntable.  Are you kidding me?

### A quick and dirty FAQ

Q: This is the worst turntable ever.  You're a horrible human being.  
A: ... Seriously?   It's a fricking 3D Printed record player.  If it's not cool enough, go design your own before criticising me.  When you do, ping me, because I'll tell you it's fucking awesome and want to buy you a beer.

Q: Why did you pick this motor?
A: I wanted something super cheap and off the shelf.  It had to be cheap, have enough torque, and be controlled with 12v.   Yes, it's noisy, but this is a proof of concept and I can source a better motor later.

Q: Why did you use Direct Drive?
A: I actually did the first version with belt drive, but the maths for pulley ratio and centers gets annoying when you are testing lots of different motors, which I did.

Q: Why did you hotglue on a cartridge?
A: This is a super cheap cartridge.  I got 3 for $10 delivered.  And frankly, using hotglue connector for this level of quality of a device is not a big deal.  Yes, it might be misaligned, but it's an experiment!  

Q: Why did you use a ceramic cartridge?
A: It's cheap!

Q: How can I align the cartridge?
A: Buy a better quality cartridge, then you can.  The tone arm has slots at the standard distances for a cartridge, but frankly, you have other problems that need to be solved before spending cash on a good cartridge for this device!

Q: The platter wobbles.  
A: Yep it does.  I'm unsure why this happens, but my guess is it's to do with the Z axis on printers being not terribly accurate.  If it is out of plumb by even 0.1 degree that would translate to a 300mm platter wobble of 0.5 millimeter. 

Q: I saw the video and your beard is glorious, how can I have one?
A: Don't shave for a bit.  Then after you do that, rub it against a bee hive, ignoring the hundreds of stings from angry bees, until sufficient wax is in the beard, then mould and comb the bear into shape.  Or use product, whichever is easier.

If you're looking for great sound, go spend a few thousand on a good turntable (I have).  If you're looking for a fun experiment, keep reading... :) 

This project is not for beginners.  It implies a basic knowledge of electronics, arduino and sufficient skills to be able to 3D Print the parts.  All of these parts can be substituted, and hacking this to make it better is strongly encouraged.

## Parts List.

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
* 8x M3x8mm screw
* 2x M3x15/16mm screw
* 2x M3x8 Nut
* 1x M3x25mm Screw

## Basic Instruction.  I mean Basic.  Read between the lines until I publish some pictures.  This isn't instructibles.

1.  Print files.    Print the following in whatever you usually print in with PLA.  I used 10% infill and no supports or rafts.  There is one file that must be printed with 100% infill and it's clearly identified.   Choose whichever sizes you can fit on your printer, the bigger the better, but honestly, just print whatever works for you.
2.  Flash the Arduino with the .INO code provided.
3.  Attach the motor to the Motor Carrier with 2x M3x8mm screws.  Do not overtighten.  Just tight enough to be secure.
4.  Attach the Motor Carrier to the Chassis with 2x M3x8mm screws.  
5.  If you printed a two piece chassis due to a small printer, connect the two pieces with 4x M5x16mm screws and nuts.
6.  Hot glue your Cartridge (Record player needle) to the Tone Arm.
7.  Feed your thin gauge wires up through the tonearm.  
8.  Strip one end of the headshell wires, and solder the stripped end to the thin gauge wires.
9.  Connect these to the cartridge.  Take note of the pins and colors.
10.  Feed these through the hole on the chassis.
11.  Feed Attach them to the RCA jacks as per this image: https://www.turntableneedles.com/Images/CartWiring.gif
12.  Solder the 2.1mm Barrel Jack to the 2.1mm Barrel Connector with a short length of wire.
13.  Attach the Arduino with 4x M3x8mm Screws.
14.  Connect it up to the chassis, and plug the arduino into it.
15.  Time to solder the switch, do one end first, then feed it through the hole on the front of the panel, otherwise you wont be able to connect it.
16.  Thread a resistor between the - pin on the button and the GND pin on the button.
17.  Solder Pin 5 on the motor shield to the + pin on the button, using ribbon cable
18.  Solder GND on the motor shield to the - pin on the button, using ribbon cable.  
19.  Solder Pin 6 on the motor shield to one of the remaining pin that DOES NOT have a resistor., using ribbon cable.
20.  Solder GND on the motor shield to the last pin, the one that DOES have the resistor, using ribbon cable.
21.  Attach the Tone Arm Pillar to the Chassis with a M3x15mm screw.
22.  Attach the Tone Arm Bearing to the Tone Arm Pillar with a M3x8mm screw (must be loose)
23.  Attach the Tone Arm Rest to the Chassis with a M3x15mm screw.
24.  Attach the Tone Arm Rest Clip to the Tone Arm Rest with a M3x8mm screw.
25.  Attach the Hub to the Motor Spindle.  Align the flat spot with the screw hole, and insert a M3x25mm screw to act as a set screw.
26.  Push the Platter down onto the Spindle.
27.  Attach the Tone Arm to the Tone Arm Bearing using 2x M3x8mm screws (one on each side) or 1x M3x25mm screw all the way through.
28.  Plug in a 12VDC Power Supply, Sacrifice a Goat, Press the power button.
29.  Play music.
