$div_by_both = 0
$div_by_three = 0
$div_by_five = 0
$div_by_neither = 0

for($i = 0; $i -lt 101; $i++){
    if($i % 3 -eq 0 -and $i % 5 -eq 0){
        write-host "Fizzbuzz"
        $div_by_both++
        if($i % 5 -eq 0){
            $div_by_five++
        }else{
            $div_by_three++
        }
    }elseif($i % 3 -eq 0){
        write-host "Fizz"
        $div_by_three++
    }elseif($i % 5 -eq 0){
        write-host "Buzz"
        $div_by_five++
    }else{
        write-host $i
        $div_by_neither++
    }
}

$total = $div_by_three + $div_by_five + $div_by_neither

write-host "Divisible by both: " $div_by_both
write-host "Divisible by three: " $div_by_three
write-host "Divisible by five: " $div_by_five
write-host "Divisible by neither: " $div_by_neither
write-host "Total: " $total