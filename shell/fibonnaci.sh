read -p "How many fibonacci numbers do you want: " n

a=0
b=1

for (( i=0; i<n; i++ )); do
  c=$(expr $a + $b)
  echo "$c"

  a=$b
  b=$c
done
