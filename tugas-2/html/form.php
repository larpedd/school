<?php 
$nilai = $_POST['nilai'];

if ( $nilai > 95 ) {
    echo "Nilai: A";
} elseif ( $nilai > 85 ) {
    echo "Nilai: B";
} elseif ( $nilai > 75 ) {
    echo "Nilai: C";
} else {
    echo "Nilai: D";
}
?>