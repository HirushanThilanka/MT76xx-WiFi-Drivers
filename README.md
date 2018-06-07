# MT76xx-WiFi-Drivers
MT76xx WiFi Drivers for ubuntu and Debian users

// Added support to latest 4.16 kernel \\

Original Source belong to Mediatek and Nurobin who devoloped MT7630E version. I just add more featuers 
so every MT76xx users can use this

Easy installation package for Mediatek MT76xx Wifi + Bluetooth Combo Linux Driver.


# Component


* rt2x00: Wi-Fi driver source code
* btloader: Bluetooth firmware loader source code
* firmware: Firmware binary code (MT7650E234.bin is for Wi-Fi, mt76x0.bin is for Bluetooth)


# Installation

**You need kernel headers to build the driver**

As an example, on Debian and derivatives, assuming you're on an amd64 system:

Sudo apt-get update && sudo apt-get dist-upgrade

sudo apt install build-essential linux-headers-amd64


That's all for dependencies.

First give some file execution permission:

     chmod +x install test uninstall bpatch

Now to install it, run:

     ./installt

To uninstall, run:

      ./uninstall

To install with dkms:

    sudo make dkms

The driver will automatically load at startup...
