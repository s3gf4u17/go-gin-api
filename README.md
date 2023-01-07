<h1 align="center">Gost - SWS</h1>

Cross-platform static web server for web development. 

![Go](https://img.shields.io/badge/go-%2300ADD8.svg?style=flat&logo=go&logoColor=white)
![Size](https://img.shields.io/github/languages/code-size/s3gf4u17/gost)
![Files](https://img.shields.io/github/directory-file-count/s3gf4u17/gost)
![Downloads](https://img.shields.io/github/downloads/s3gf4u17/gost/total)
![Debian](https://img.shields.io/badge/Debian-D70A53?style=flat&logo=debian&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=flat&logo=windows&logoColor=white)

## Build from source code

To build the project, you first need a golang compiler.

    Debian  > sudo apt install golang
    Windows > choco install golang

Gost does not require any external libraries. You can build it with basic command:

    go build -x -o gost

## Run on Debian

First build binary from source code or download prebuilt version from **Releases**.

    sudo cp <path to binary> /bin/

Now you can use Gost anywhere as a system command, with a simple command:

    gost -host=<host> -port=<port> -path=<path>

## Run on Windows

todo

## Release notes

- **version 0.0.0**
    - serve html pages stored in html folder

## Legal notice

Gost is a free software. By using gost you agree to sharing contents of your disk via internet. Authors do not take responsibility for badly configured program.