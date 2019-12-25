Set-Variable target -option Constant -value 200

for ($count = 1; $count -le $target; $count++) {
    if (($count % 3 -eq 0) -and ($count % 5 -eq 0)) {
        Write-Output "FizzBuzz!"
    } elseif ($count % 3 -eq 0) {
        Write-Output "Fizz!"
    } elseif ($count % 5 -eq 0) {
        Write-Output "Buzz!"
    } else {
        Write-Output $count
    }
}
