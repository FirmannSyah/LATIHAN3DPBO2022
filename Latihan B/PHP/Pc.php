<?php

class PC {
	
	private $pr;
	private $dk;
	private $rm;
	private $totalPrice;

	// Konstruktor
	function __construct($pr, $dk, $rm) {
		$this->pr = $pr;
		$this->dk = $dk;
		$this->rm = $rm;
		$this->totalPrice = $pr->getPrice() + $dk->getPrice() + $rm->getPrice();
	}

	// set untuk semua varible
	function setProc($pr) {
		$this->pr = $pr;
	}
	function setDisk($dk) {
		$this->dk = $dk;
	}
	function setRam($rm) {
		$this->rm = $rm;
	}
	function setTPrice($pr, $dk, $rm) {
		$this->$totalPrice = $pr->getPrice() + $dk->getPrice() + $rm->getPrice();
	}

    //get untuk semua variable
	function getProc() {
		return $this->pr;
	}
	function getDisk() {
		return $this->dk;
	}
	function getRam() {
		return $this->rm;
	}
	function getTPrice() {
		return $this->totalPrice;
	}


    // tampilan untuk semua item didalam pc
    function printPc() {
        echo "+PROCESSOR+". "<br/>". "<br/>";
        $this->pr->printProc();
        echo "<br>". "+DISK+". "<br/>". "<br/>";
        $this->dk->printDisk();
        echo "<br>". "+RAM+". "<br/>". "<br/>";
        $this->rm->printRam();
        echo "------------------------------- +". "<br>";
        echo "Total harga : ". $this->getTPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>