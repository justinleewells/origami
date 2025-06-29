#!/bin/sh

pgid=$(ps -o pgid= $$ | tr -d ' ')
trap 'kill -- -$pgid' 0

ls ./modules/**/src/*.{cpp,h} | entr -cp make $1_test &
ls ./bin/$1_test | entr -cp ctest --output-on-failure ./bin/$1_test
