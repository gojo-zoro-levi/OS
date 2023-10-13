read -p "Enter the number : " n

i=2

while [ $i -le $n ]; do
 
  is_prime=true
  for (( j=2; j<i; j++ )); do
    if [ $((i % j)) -eq 0 ]; then
      is_prime=false
      break
    fi
  done

  if [ $is_prime = true ]; then
    echo "$i"
  fi

  i=$(expr $i + 1)
done
