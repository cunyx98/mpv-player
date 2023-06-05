# mpv-player
base on mpv player

// https://github.com/mpv-player/mpv


/// msys2 编译
0.环境
# pacman -Syu
# pacman -Su
# pacman -S make automake autoconf perl bison gperf libtool lzip unzip
# pacman -S git python $MINGW_PACKAGE_PREFIX-{pkg-config,gcc}
# pacman -S $MINGW_PACKAGE_PREFIX-{ffmpeg,libjpeg-turbo,lua51}

1.编译源代码 git clone https://github.com/mpv-player/mpv.git
# git clone https://github.com/cunyx98/mpv-player.git
# cd mpv
# python3 bootstrap.py
# /usr/bin/python3 waf configure CC=gcc.exe --enable-libmpv-shared --enable-sdl2 --prefix=/usr/local/mpv
# /usr/bin/python3 waf build
# /usr/bin/python3 waf install