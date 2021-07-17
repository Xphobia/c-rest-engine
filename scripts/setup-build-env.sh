#!/bin/bash

# This script is used to set up rest-c-engine build environment on Centos7

# build tools
yum install -y rpm-build openssl-devel autoconf automake libtool 

# optional tools
yum install -y net-tools tree
