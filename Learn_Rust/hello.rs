use std::io;
use std::cmp::Ordering;

fn main() {
    println!("Hello, world!");
    print!("This is my first rust Program!!!!\n\n");
    
    // using ! calls a macro that executes a chunk of code that is helpful or useful
    // think of it like the std of C++?

    println!("Guess the number!");
    println!("Please input your guess.");

    let mut guess = String::new();
    let secret_number: u32 = 57;

    // data input
    io::stdin()
	.read_line(&mut guess)
	.expect("Failed to read line");


    println!("you guessed: {guess}");

    
    loop {
	println!("please input your guess");

	io::stdin()
	    .read_line(&mut guess)
	    .expect("Failed to read line");

	let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
	};

	match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
		println!("You win!");
		break;
	    }
	}
    }
}

