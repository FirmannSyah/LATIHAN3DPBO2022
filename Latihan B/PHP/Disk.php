<?php
class Disk {
    private $type;
    private $capacity;
    private $price;

    // konstruktor
    function __construct($type, $capacity, $price) {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // set untuk semua variable
    function setType($type) {
        $this->type = $type;
    }
    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }
    function setPrice($price) {
        $this->price = $price;
    }

    // get untuk semua variable
    function getType() {
        return $this->type;
    }
    function getCapacity() {
        return $this->capacity;
    }
    function getPrice() {
        return $this->price;
    }

    // tampil untuk disk
    function printDisk() {
        echo "Tipe Disk : ".  $this->getType(). "<br/>";
        echo "Kapasitas Disk : ". $this->getCapacity(). "<br/>";
        echo "Harga Disk : ". $this->getPrice(). "<br/>";
    }

    // destruktor
    function __destruct() {}
}
?>