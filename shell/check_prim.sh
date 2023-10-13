
is_prime() {
    num=$1
    if [ $num -lt 2 ]; then
        echo "$num is not a prime number."
        exit
    fi

    for ((i = 2; i * i <= num; i++)); do
        if [ $((num % i)) -eq 0 ]; then
            echo "$num is not a prime number."
            exit
        fi
    done

    echo "$num is a prime number."
}

echo -n "Enter a number: "
read number

is_prime $number
