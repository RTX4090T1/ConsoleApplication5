//<!DOCTYPE html>
//<html lang = "en">
//<head>
//<meta charset = "UTF-8">
//<meta name = "viewport" content = "width=device-width, initial-scale=1.0">
//<title>Fuel Stations< / title>
//<style>
//table{
//    border - collapse: collapse;
//    width: 100 %;
//}
//th, td{
//    border: 1px solid #000;
//    padding: 8px;
//    text - align: left;
//}
//th{
//    background - color: #f2f2f2;
//}
//< / style>
//< / head>
//<body>
//<h1>Fuel Stations< / h1>
//<form action = "" method = "get">
//<label for = "inputOwner">Enter Owner Name : < / label>
//<input type = "text" name = "inputOwner" value = "<?php echo $_GET["inputOwner"] ?? '' ?>" id = "inputOwner">
//<input type = "submit" value = "Filter">
//< / form>
//
//<h2>Add / Redact new object< / h2>
//<div >
//<form action = "" method = "post">
//<label for = "name">Enter data to add : < / label>
//<input type = "text" name = "name" id = "name" requiered>
//
//
//<form action = "" method = "post">
//<label for = "capacity">Enter data to add : < / label>
//<input type = "text" name = "capacity" id = "capacity" requiered>
//
//
//<form action = "" method = "post">
//<label for = "code">Enter data to add : < / label>
//<input type = "text" name = "code" id = "code" requiered>
//
//
//<form action = "" method = "post">
//<label for = "price">Enter data to add : < / label>
//<input type = "text" name = "price" id = "price" requiered>
//
//<input type = "submit" name = "submit" value = "Add">
//
//<form action = "" method = "post">
//<label for = "index">Enter index to redact< / label>
//<input type = "text" name = "index" id = "index" required>
//<input type = "submit" name = "submit" value = "Redact">
//< / form>
//< / div>
//
//
//<h2>Fuel Station List< / h2>
//<table>
//<thead>
//<tr>
//<th>Code< / th>
//<th>Owner< / th>
//<th>Fuel Capacity(liters) < / th >
//<th>Price Per Liter< / th>
//< / tr>
//< / thead>
//<tbody>
//< ? php foreach($displayList as $azsdata) : ? >
//<tr>
//<td> < ? php echo $azsdata["Code"]; ? > < / td>
//<td> < ? php echo $azsdata["Owner"]; ? > < / td>
//<td> < ? php echo $azsdata["FuelCapacity"]; ? > < / td>
//<td> < ? php echo $azsdata["PricePerLiter"]; ? > < / td>
//< / tr>
//< ? php endforeach; ? >
//< / tbody>
//< / table>
//< / body>
//< / html>