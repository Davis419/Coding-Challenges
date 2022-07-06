<?php
/******************************************************************************


*******************************************************************************/

    class ModuloGroup{
        private $n;
        private $group;
        private $cyclicSubgroup;
        private $subgroups;
        
        public function __construct($number)
        {
            $this->n = $number;
            
            for($x = 0; $x < $this->n; $x++)
                $this->group[$x] = $x;
        }
      
        public function displayGroup()
        {
            echo "G = {";
        
            for($x = 0; $x < $this->n; $x++){
                if($x != $this->n - 1)
                    echo $this->group[$x] . ", ";
                else
                    echo $this->group[$x] . "} " . "\n";
            }
        }
        
        // public function displaySubgroup()
        // {
        //     echo "<".$this->cyclicSubgroup[1]."> = {";
        
        //     for($x = 0; $x < count($this->cyclicSubgroup); $x++){
        //         if($x != count($this->cyclicSubgroup) - 1)
        //             echo $this->cyclicSubgroup[$x] . ", ";
        //         else
        //             echo $this->cyclicSubgroup[$x] . "} " . "\n";
        //     }
        // }
        
        public function groupGenerator($cyclicSubgroupGenerator)
        {
            $this->cyclicSubgroup = [];
            
            //If the generator of the subgroup is identity element
            if($cyclicSubgroupGenerator == $this->group[0])
                $this->cyclicSubgroup = [$this->group[0]];
                
            else{
                $this->cyclicSubgroup = [$this->group[0],  $cyclicSubgroupGenerator];
                $cyclic = false;
                
                while(!$cyclic)
                {
                    $lastIndex = count($this->cyclicSubgroup) - 1;
                    $lastElementSquared = ($this->cyclicSubgroup[$lastIndex] + $cyclicSubgroupGenerator) %  $this->n;
                    
                    if($lastElementSquared == $this->cyclicSubgroup[0])
                        $cyclic = true;
                    else {
                        $this->cyclicSubgroup[$lastIndex + 1] = $lastElementSquared;
                    }
                }
            }
            
            return $this->cyclicSubgroup;
        }
        
        public function cyclicSubgroups()
        {
            for($x = 0; $x < $this->n; $x++)
                $this->subgroups[$x] = $this->groupGenerator($x);
        }
        
        public function displaySubgroups()
        {
            for($x = 0; $x < $this->n; $x++){
                
                 echo "<".$x."> = {";
                
                for($y = 0; $y < count($this->subgroups[$x]); $y++){
                    if($y != count($this->subgroups[$x]) - 1)
                        echo $this->subgroups[$x][$y] . ", ";
                    else
                        echo $this->subgroups[$x][$y] . "} " . "\n";
                }
                // echo "\n";
            }
        }
    }
    
    $n = 6; //Zn
    echo "Let G be a group of integers modulo ".$n." or Z".$n.". The elements of G are: \n";
    
    $group = new ModuloGroup($n);
    $group->displayGroup();
    
    echo "\nThe cyclic subgroups of G are: \n";
    $group->cyclicSubgroups();
    $group->displaySubgroups();


    
    
