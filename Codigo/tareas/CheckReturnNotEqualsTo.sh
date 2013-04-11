#! /bin/sh

expectedNotToBeEquals=$1
shift
$@
actual=$?
echo "Expected not to be equals result: $expectedNotToBeEquals. Actual result: $actual" > CheckReturnNotEqualsTo.out
if [ $expectedNotToBeEquals -eq $actual ]
then
    return 2
else
    return 0
fi
