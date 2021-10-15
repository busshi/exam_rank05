#!/bin/bash

exit_status=0

cd ex00 && make test
[[ $? -ne 0 ]] && exit_status=$(( $exit_status + 1 ))

echo -e "\n\n"
cd ../ex01 && make test
[[ $? -ne 0 ]] && exit_status=$(( $exit_status + 1 ))

#echo -e "\n\n"
#cd ../ex02 && make test
#[[ $? -ne 0 ]] && exit_status=$(( $exit_status + 1 ))


exit $exit_status
