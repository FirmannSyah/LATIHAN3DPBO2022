<?php
include "Processor.php";
include "Disk.php";
include "Ram.php";
include "PC.php";


$processor = new Processor("I3_10300", 4900000);
$disk = new Disk("SSD", 1000, 1000000);
$ram = new Ram("16", 1200000);

//buat kelas item untuk membuat kelas Pc yang didalamnya terdapat kelas processor, disk dan ram
$item = new Pc($processor, $disk, $ram); 

//tampilkan print pc
$item->printPc(); 
?>