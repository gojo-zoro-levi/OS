
read -p "Enter a number: " number

digits=()

while [ "$number" -gt 0 ]; do
  digit=$((number % 10))
  digits+=($digit)
  number=$((number / 10))
done

for digit in "${digits[@]}"; do
  echo $digit
done
