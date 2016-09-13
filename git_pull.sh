#!/bin/bash
cd /home/user/dev
PRE_STASH_STATUS="`git status -s | wc -c`"
if [ $PRE_STASH_STATUS -gt 0 ]; then
    git stash
fi
git clean -df
POST_STASH_STATUS="`git status -s | wc -c`"
if [ $POST_STASH_STATUS -eq 0 ]; then
    git pull --rebase origin eng
fi
if [ $PRE_STASH_STATUS -gt 0 ]; then
    git stash pop
fi
cd /home/user/dev/build
make -j2
