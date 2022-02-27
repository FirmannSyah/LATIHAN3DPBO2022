<?php
class Ram {
    private $capacity;
    private $price;

    // kosnturktor
    function __construct($capacity, $price) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // set untuk semua variable
    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }
    function setPrice($price) {
        $this->price = $price;
    }

    // get untuk semua variable
    function getCapacity() {
        return $this->capacity;
    }
    function getPrice() {
        return $this->price;
    }

    // tampil untuk ram
    function printRam() {
        echo "Kapasitas Ram : ". $this->getCapacity(). "<br/>";
        echo "Harga Ram : ". "Rp. ". $this->getPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>