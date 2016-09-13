#!/bin/bash

cd /home/user/dev/

ctags -R --exclude="*.js"

find /home/user/dev/ -name '*.c' > /home/user/dev/cscope.files
find /home/user/dev/ -name '*.h' >> /home/user/dev/cscope.files
find /home/user/dev/ -name '*.cc' >> /home/user/dev/cscope.files
find /home/user/dev/ -name '*.proto' >> /home/user/dev/cscope.files
cscope -b
