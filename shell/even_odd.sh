read -p "Enter a number: " number

if [ $(expr $number % 2) -eq 0 ]; then
  echo "The number $number is even."
else
  echo "The number $number is odd."
fi
