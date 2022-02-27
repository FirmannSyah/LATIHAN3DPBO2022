<?php
class Processor {
    private $name;
    private $price;

    // konsturktor
    function __construct($name, $price) {
        $this->name = $name;
        $this->price = $price;
    }

    //set untuk semua variable
    function setName($name) {
        $this->name = $name;
    }
    function setPrice($price) {
        $this->price = $price;
    }
    //get untuk semua varible
    function getName() {
        return $this->name;
    }
    function getPrice() {
        return $this->price;
    }

    // tampil untuk prosessor
    function printProc() {

        echo "Nama Processor : ".  $this->getName(). "<br/>";
        echo "Harga Processor : ". "Rp. ". $this->getPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>