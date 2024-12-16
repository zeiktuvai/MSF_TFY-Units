#!/bin/bash
date
hemtt build

rm -r "$DEV_MOD_PATH"@MSF-Units-Dev/*
rm -r ~/Arma_Dev/@MSF-Units-Dev/*
/bin/cp -rfp .hemttout/build/* "$DEV_MOD_PATH"@MSF-Units-Dev/
/bin/cp -rfp .hemttout/build/* ~/Arma_Dev/@MSF-Units-Dev/


while getopts ":s" option; do   

    case $option in
        s)
            # copy to server
            #ssh $ARMA_DEV_SRV 'powershell rm -recurse C:\Servers\arma3-dev\@MSF\*'
            #scp -r .hemttout/build/* $ARMA_DEV_SRV:/C:/Servers/arma3-dev/@MSF
            #exit;;        
    esac
done