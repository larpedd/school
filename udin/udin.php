<?php
$nama = $_POST['nama'];
$pass = $_POST['pass'];

if ($nama == "udin" && $pass == "udin123") {
    echo "Kamu masuk sebagai: ";
    echo $nama;
} else if ($nama == "maya" && $pass == "/dev/sda/") {
    echo "Kamu masuk sebagai admin: ";
    echo $nama;
} else {
    echo "user atau password salah";
}
?>