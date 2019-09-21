/*
 *  A good architecture maximizes the number of decisions not made
 *							Robert C. Martin
 *
 *  A good architecture allows major decisions to be deferred
 *  						Robert C. Martin.
 *
 * */

public interface CommandBus{
	void execute(Command command);
}

public interface CommnandHandler {
	public void handle(Command command);
}

public class CB implements CommandBus{
    public void execute (Command command){
    	registry.getHandler(command).execute();
    }
}

public class Car implements Domain {

	public void drive(Gear gear) {
		if (isNotAllAllowed(gear) {
				throw new InvalidGearException();
		}
	}
}
