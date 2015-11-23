# mintypwn
In a nutshell, mintypwn is a pocket-sized, teensy-based HID emulator used to exploit a targeted computer's trust of USB keyboards and mice.

## Actually Serious Disclaimer
* **I can't tell you what to do or otherwise control your actions.  That being said, what you do with this repository is up to you and your own judgement.**

* **This project was not intended for uses that could put you in any form of danger. It would be a good idea to not use this to do things that would put you in any danger.**

* **Always use judgement.**

* **Don't be stupid.**

* **I am not responsible for any of your actions.**

##Building a mintypwn
#### Getting started:
* As far as hardware goes, I reccomend using a teensy 3.1, though there are other *duino-based boards that can also emulate HID.  I use teensy because of the small size and low price.
* A case/enclosure is 100% optional. I use one for mobility; other advantages to enclosures include looking less suspicious (you don't have to use an altoids tin, you can empty out an old flash drive enclosure).  
* For my enclosure, I took an old Altoids Smalls tin I had laying around, drilled a hole in the side for the mini usb port, and secured the teensy inside with some hot glue. For aesthetics, I put a skull sticker on the top of the tin and drilled holes where the eyes are, and put some hot glue on the eyes to diffuse the light.  This way you can tell if the teensy is doing its job from the blinking of the LED. It also looks fucking awesome.
* On the software side of things, you'll need a few pieces of software.  The first being the Arduino IDE (you can also use GitHub's Atom, which is what I used). Then you will need to add some stuff to your Arduino IDE install so the IDE can talk with the teensy.  Additionally, you will need the teensy loader.  Everything I just listed is availible for OS X, Linux and Windows. If you are using Solaris, sorry.

#### Getting exploits on the teensy:
* Plug the teensy into your computer.  If you have an exploit already on the teensy, make sure to press the surface mount button on the board to stop it from doing any HID emulation and  blowing up Mars or some shit.
* Open up one of the exploits in this repo in the Arduino IDE, make sure you have told the IDE to talk to the teensy, and click upload.  The teensy loader should appear, and automatically load the compiled .hex to the teensy.  For testing, try loading something harmless such as one of the "open terminal" ones that just open up a terminal and echo "hello world".
* Once everything finishes up, unplug the teensy.  If you wish to execute the exploit on the same computer that you used to load the code on the teensy, just keep it plugged in and wait for the teensy to do it's job on your computer.

## Related projects
* u3-pwn
* social-engineering-toolkit/SET (this one actually has an arduino/teensy attack vector)
* usbdriveby (this is where I got the inspiration for mintypwn)