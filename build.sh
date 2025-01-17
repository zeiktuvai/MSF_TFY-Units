#!/bin/bash
date
hemtt build

rm -r "$DEV_MOD_PATH"@MSF-Units-Dev/*
rm -r ~/Arma_Dev/mods/@MSF-Units-Dev/*
/bin/cp -rfp .hemttout/build/* "$DEV_MOD_PATH"@MSF-Units-Dev/
/bin/cp -rfp .hemttout/build/* ~/Arma_Dev/mods/@MSF-Units-Dev/