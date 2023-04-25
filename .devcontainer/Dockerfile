FROM mcr.microsoft.com/devcontainers/universal:2-linux

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends git wget lbzip2 make cmake

RUN wget -q https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 -O /tmp/gcc-arm-none-eabi-10.3.tar.bz2
RUN mkdir -p /opt/gcc-arm-none-eabi-10.3
RUN tar -xf /tmp/gcc-arm-none-eabi-10.3.tar.bz2 -C /opt/gcc-arm-none-eabi-10.3 --strip-components=1
RUN ln -s /opt/gcc-arm-none-eabi-10.3/bin/* /usr/local/bin
RUN rm -rf /tmp/*