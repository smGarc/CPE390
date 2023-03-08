/* _z1fii:
          rcx, rdx, rsi, rdi

          rax has rhe answer at the end
          ret

  The computer's Clock ticks to keep everything in time, and
  have programns and commands happen at the same time
  so why can't we just have clocks that tick way faster??
  ->> Heat & power

  __CPU Terminology__
  Clock - master timer for the cpu (5Ghz for about normal people)
    >>Overclocking - running it faster than its supposed to so it gets
      hotter than its supposed to
    >>Air, heat sinks, thermal paste, silver(the best heat conductor
      and electricity conductor)
    >>Why don't we use silver contacts? they rust (tarnish)
    >>Gold is even more expensive but doesn't corrode, so its used in
      computers and shit
  TDP - Thermal Design Power (around 10-15 watts if its a laptop,
      more if its a gaming laptop)
    >>Today: server TDP = 250 watts
    >>All chips contain temp sensors, if theyre too hot they automatically
      shut down so that they don't fry. It's common sense, these chips are like
      $1.5k and they're gonna fry because ur fan went out? hell no
  Registers - 16-integer registers, ea one 64-bits
  32-bit = 4Gb address space
  64-bit = 4.2B * 4.2B = 18quintillion
  Intel CPU does NOT adress 64-bit, 48 pins to the outside
  2^48 = 2^16 * 2^32
  ALU - Arithmetic Logic Unit - thing that does all the math
    >>add, sub, mul, div, mod?, and, or, xor, not
      add %rbx, %rcx    # rcx = rbx + rcx
      add $1, %rcx      # immediate mode, add 1 to %rcx
      add (%rbx), %rcx  # load memory location %rbx and add to %rcx
  microcode
  CISC - Complex Instruction Set Computer (Intel)
  RISC - Reduced Instruction Set Computer (ARM)
    ldr 1251, x6  <<- load something into register 6
    ldr 12555, x7
    str [x9], x7
    add x9, x6, x7
    sub x19, x4, x5
  pipelining - multitasking
            AB        A+B       AOB
  A   B   A AND B   A OR B    A XOR B   A NAND B    A NOR B
  0   0      0         0         0         1           1
  0   1      0         1         1         1           0
  1   0      0         1         1         1           0
  1   1      1         1         0         0           0
  N channel mosfets are more efficent than P-channel
  it's more efficient to implement NAND and NOR
  SSD Solid State Drive built out of NAND flash
*/