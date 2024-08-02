#!/bin/bash

id -Gn $ft_USER | tr ' ' ',' | tr -d '\n'
