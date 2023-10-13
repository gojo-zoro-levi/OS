#!/bin/bash

# Get the number from the user
read -p "Enter a number: " number

# Initialize the sum
sum=0

# Calculate the sum of the cubes of the digits
for (( i=0; i<${#number}; i++ )); do
  digit=${number:i:1}
  sum=$((sum + $digit**3))
done

# Check if the sum is equal to the number
if [ $sum -eq $number ]; then
  echo "$number is an Armstrong number."
else
  echo "$number is not an Armstrong number."
fi
