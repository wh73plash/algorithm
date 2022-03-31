use std::io;

fn main(){
    let mut input_number = String::new();

    io::stdin().read_line(&mut input_number)
        .expect("Falied to read line");

    let numbers: Vec<&str> = input_number.split_whitespace().collect();

    let a = match numbers[0].parse::<i32>() {
        Ok(i) => i,
        Err(_e) => { -1 }
    };
    
    let b = match numbers[1].parse::<i32>() {
        Ok(i) => i,
        Err(_e) => {  -1 }
    };

    let c = match numbers[2].parse::<i32>() {
        Ok(i) => i,
        Err(_e) => {  -1 }
    };

    println!("{}\n{}\n{}\n{}\n", (a + b) % c, ((a % c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) % c);

    return;
}