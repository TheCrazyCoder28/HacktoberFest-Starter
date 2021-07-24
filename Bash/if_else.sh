#!/bin/bash

read -p  "Enter Your Name: " NAME

if [ "$NAME" = "abhishek" ]
then
	echo "Wallah Wallah! You are ROOT user"
else
	echo "No Entry :("
fi
